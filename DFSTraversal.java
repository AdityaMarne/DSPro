import java.util.*;

public class DFSTraversal
{
	private LinkedList<Integer> adj[]; /*Adjacency list representation*/
	private boolean visited[];

	DFSTraversal(int V)/*V is the no. of vertices in the graph*/
	{
		adj = new LinkedList[V];
		visited = new boolean[V];
	
		for(int i=0;i<V;i++)
		{
			adj[i] = new LinkedList<Integer>();
		}
	}
	
	void insertEdge(int src, int desc) 
	{
			// TODO Auto-generated method stub
		adj[src].add(desc);
	}

	void DFS(int vertex)
	{
		visited[vertex] = true; /*Mark the current node as visited*/  
		System.out.print(vertex +" ");
		Iterator<Integer> itr=adj[vertex].listIterator();
		while(itr.hasNext())
		{
			int n=itr.next();
			if(!visited[n])
			{
				DFS(n);
			}
		}
	}

	public static void main(String args[])
	{
	  DFSTraversal graph = new DFSTraversal(8);  
  
        graph.insertEdge(0, 1);    
        graph.insertEdge(0, 2);    
        graph.insertEdge(0, 3);    
        graph.insertEdge(1, 3);    
        graph.insertEdge(2, 4);  
        graph.insertEdge(3, 5);       
        graph.insertEdge(3, 6);    
        graph.insertEdge(4, 7);    
        graph.insertEdge(4, 5);    
        graph.insertEdge(5, 2);    
          
        System.out.println("Depth First Traversal for the graph is:");    
        graph.DFS(0);    

	}

}